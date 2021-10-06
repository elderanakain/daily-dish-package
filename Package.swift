// swift-tools-version:5.5
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
            checksum: "e516c0e12e58a067e00bdfed46fc0021bafc5456ea212c67c1c3ec6cade3eb89"
        ),
    ]
)
