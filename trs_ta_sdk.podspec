
Pod::Spec.new do |s|

s.name         = "trs_ta_sdk"
  s.version      = "1.4.0"
  s.summary      = "A delightful collection of SDK"
  s.description  = <<-DESC
                      this project provide all kinds of categories for iOS developer 
                   DESC
  s.homepage     = "https://github.com/caiqingchong/SDK-Framework"
  s.license      = { :type => "MIT"， :file => "LICENSE" }
  s.author             = { "张凯" => "2273034940@qq.com"} 
  s.platform     = :ios
  s.ios.deployment_target = "7.0"
  s.source       = { :git => "https://github.com/caiqingchong/SDK-Framework.git", :tag => s.version } 
  s.social_media_url   = "https://github.com/caiqingchong"
  s.requires_arc = true

end








