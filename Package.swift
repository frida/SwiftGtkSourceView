// swift-tools-version:5.6

import PackageDescription

let cGtkSourceTarget: Target = .systemLibrary(
    name: "CGtkSource",
    path: "Sources/CGtkSource",
    pkgConfig: "gtksourceview-5",
    providers: [
        .brew(["gtksourceview5", "gtk4", "glib", "gobject-introspection"]),
        .apt(["libgtksourceview-5-dev", "libgtk-4-dev", "libglib2.0-dev", "gobject-introspection", "libgirepository1.0-dev"])
    ]
)

let package = Package(
    name: "GtkSource",
    products: [ .library(name: "GtkSource", targets: ["GtkSource"]) ],
    dependencies: [
        .package(url: "https://github.com/frida/gir2swift.git", branch: "development"),
        .package(url: "https://github.com/frida/SwiftGtk.git",  branch: "gtk4-development"),
        .package(url: "https://github.com/apple/swift-docc-plugin", from: "1.0.0"),
    ],
    targets: [
        cGtkSourceTarget,
        .target(
            name: "GtkSource",
            dependencies: [
                "CGtkSource",
                .product(name: "gir2swift", package: "gir2swift"),
                .product(name: "Gtk",       package: "SwiftGtk"),
            ],
            swiftSettings: [
                .unsafeFlags(["-suppress-warnings"], .when(configuration: .release)),
                .unsafeFlags(["-suppress-warnings", "-Xfrontend", "-serialize-debugging-options"], .when(configuration: .debug)),
            ],
            plugins: [
                .plugin(name: "gir2swift-plugin", package: "gir2swift")
            ]
        ),
        .testTarget(
            name: "GtkSourceTests",
            dependencies: ["GtkSource"],
            swiftSettings: [
                .unsafeFlags(["-suppress-warnings"], .when(configuration: .release)),
            ]
        ),
    ]
)
