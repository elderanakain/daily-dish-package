// swift-tools-version:5.4
import PackageDescription

let package = Package(
    name: "common",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "common",
            targets: ["common"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "common",
            url: "https://github.com/elderanakain/daily-dish-package/common-1.0.9.zip",
            checksum: "4b85128081a33a93ad311b5c3d7f9d3f22bbf3dd067b054afb942d64b29ecf53"
        ),
    ]
)
