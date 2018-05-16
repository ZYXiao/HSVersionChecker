Pod::Spec.new do |s|
  s.name         = "HSVersionChecker"

  s.version      = "1.0.0"

  s.summary      = "App version check update component."

  s.homepage     = "https://github.com/ZYXiao/HSVersionChecker"

  s.license      = { :type => "MIT", :file => "LICENSE" }

  s.author       = { "ZYXiao" => "304983615@qq.com" }

  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/ZYXiao/HSVersionChecker.git", :tag => "1.0.0" }

  s.source_files  = "HSVersionChecker/**/*.{h,a}"

  s.frameworks    = 'Foundation', 'UIKit'

  s.dependency 'HSCryption'

  s.requires_arc = true
end
