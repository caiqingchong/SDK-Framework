
Pod::Spec.new do |s|

 


  s.name         = "trs_ta_sdk" # 项目名称
  s.version      = "1.4.0"       # 版本号 与 你仓库的 标签号 对应
  s.license      = "MIT"          # 开源证书
  s.summary      = "A delightful SDK" # 项目简介

  s.homepage     = "https://github.com/caiqingchong/SDK-Framework" # 你的主页
  s.source       = { :git => "https://github.com/caiqingchong/SDK-Framework.git", :tag => "#{s.version}" }#你的仓库地址，不能用SSH地址
  # s.source_files = "BYPhoneNumTF/*.{h,m}"  BYPhoneNumTF/*.{h,m}
  s.requires_arc = true # 是否启用ARC
  s.platform     = :ios, "7.0" #平台及支持的最低版本
  s.frameworks   = "UIKit", "Foundation", "CoreTelephony" #支持的框架
  # s.dependency   = "AFNetworking" # 依赖库
  
  # User
  s.author             = { "张凯" => "2273034940@qq.com" } # 作者信息
  s.social_media_url   = "https://github.com/caiqingchong" # 个人主页

end








