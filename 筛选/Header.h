//
//  Header.h
//  Musichome
//
//  Created by Conquer on 15/12/7.
//  Copyright (c) 2015年 Conquer. All rights reserved.
//

#ifndef Musichome_Header_h
#define Musichome_Header_h


/**
 * 屏幕的宽高
 */
#define WIDTH  [[UIScreen mainScreen] bounds].size.width
#define HEIGHT [[UIScreen mainScreen] bounds].size.height

/**
 * 根试图
 */
#define TABBLEBAR_ARRAY @[@"MHFindTecViewController",@"MHScheduleViewController",@"MHMyViewController"]

//TabBar Title
#define TABBLEBAR_TITLE         @[@"首页",@"课程表",@"个人中心"]


// 设置Token
//#define TokenAccess   @"7d1294fd2a1b99a729598ebb060f6013cbfe3653"

//TabBar picture
#define  TABBLEBAR_SELECTEDIMAGE         @[@"homegreen.png",@"wdkcgreen.png",@"wogreen.png"]

//TabBar selectedPicture
#define  TABBLEBAR_IMAGE  @[@"homegrey.png",@"wdkcgrey.png",@"wogrey.png"]

//绿色  [UIColor colorWithRed:31/255.0 green:178/255.0 blue:121/255.0 alpha:1.0]

#define Green  [UIColor colorWithRed:0.000 green:0.757 blue:0.463 alpha:1.00]

//定义背景颜色  [UIColor colorWithRed:247/255.0 green:249/255.0 blue:252/255.0 alpha:1.0]

#define BACKCOLOR  [UIColor colorWithRed:0.969 green:0.976 blue:0.988 alpha:1.00]


// 定义过期的颜色
#define expireColor  [UIColor colorWithRed:0.800 green:0.800 blue:0.800 alpha:1.00]

// 定义选中的颜色
#define chooseColor  [UIColor colorWithRed:0.153 green:0.776 blue:0.533 alpha:1.00]

//定义6个C颜色
#define SIXCCOLOR [UIColor colorWithRed:0.800 green:0.800 blue:0.800 alpha:1.00]
// 灰色
#define graycolor [UIColor colorWithRed:0.902 green:0.902 blue:0.902 alpha:1.00]

//定义pickView的frame
#define PICKERVIEW_FRAME CGRectMake(0, [[UIScreen mainScreen] bounds].size.height - 200, [[UIScreen mainScreen] bounds].size.width, 200)
//高仿按钮placehoder颜色
#define BUTTON_PLACEHODER_COLOR [UIColor colorWithRed:0.8 green:0.8 blue:0.8 alpha:1.0]

//定义线颜色
#define LINECOLOR  [UIColor colorWithRed:0.800 green:0.800 blue:0.800 alpha:1.00]

//定义线颜色
#define BLACKCOLOR  [UIColor colorWithRed:0.200 green:0.200 blue:0.200 alpha:1.00]
//定义黑色字体颜色
#define TEXTGREYCOLOR  [UIColor colorWithRed:0.600 green:0.600 blue:0.600 alpha:1.00]

//定义红字体颜色
#define REDCOLOR  [UIColor colorWithRed:0.965 green:0.482 blue:0.318 alpha:1.00]

//定义主体颜色
#define MainCOLOR  [UIColor colorWithRed:0.188 green:0.204 blue:0.231 alpha:1.00]

//定义APPID
#define APPID   @"1104605771" 
/**
 * 定义接口URL
 */
//课程管理
#define kCourseURL      @"http://m.yinyueke.srv/pages/teacher/course-list.html?device=i"
//课程表
#define kScheduleURL    @"http://10.0.1.200:1337/course/calendar?device=i"
//使用帮助
#define kHelpUser       @"http://m.yinyueke.srv/pages/set/set-help.html?device=i"


//隐私条款

#define kSecret       @"http://www.yinyueke.com/privacy_policy.html"

// 服务条款
#define kSever       @"http://www.yinyueke.com/user_service.html"

//联系客服
#define kContactSevice  @"http://m.yinyueke.srv/pages/set/notescontact.html?device=i"



//获得token
#define kAccess_Token   @"http://api.yinyueke.srv/oauth2/token"
//发送短信验证码
#define kSendMessage    @"http://api.yinyueke.srv/v1/sms/send"
//发送有限验证码
#define kSendEmail      @"http://api.yinyueke.srv/v1/email/send"
//校验验证码
#define kCheckMessage   @"http://api.yinyueke.srv/v1/sms/check"
//校验邮箱
#define kCheckEmail     @"http://api.yinyueke.srv/v1/email/check"
//创建用户
#define kCreateUser     @"http://api.yinyueke.srv/v1/account/create"
//重置密码
#define kResetPassword  @"http://api.yinyueke.srv/v1/account/resetpassword"
//验证密码
#define kCheckPassword  @"http://api.yinyueke.srv/v1/account/checkpassword"

//关注人数接口
#define kFollowPeople   @"http://api.yinyueke.srv/v1/follow/studentnum?access_token=%@"
//工作经历接口
#define kWorkExperience @"http://api.yinyueke.srv/v1/workhistory?access_token=%@"
//新增工作经历
#define kWork_Add       @"http://api.yinyueke.srv/v1/workhistory/create?access_token=%@"
//删除工作经历
#define kWork_remove    @"http://api.yinyueke.srv/v1/workhistory/%@/delete?access_token=%@"
//编辑工作经历
#define kWork_upDate    @"http://api.yinyueke.srv/v1/workhistory/%@/update?access_token=%@"
//教师个人信息接口
#define kTeacherInfos   @"http://api.yinyueke.srv/v1/teacher/%@?access_token=%@"
//订单列表
#define kOrderList      @"http://api.yinyueke.srv/v1/order?access_token=%@"
//订单详情
#define kOrderDetail    @"http://api.yinyueke.srv/v1/order/%@?access_token=%@"
//获取绑定银行
#define kGetBankBind    @"http://api.yinyueke.srv/v1/bankbind?access_token=%@"
//获取银行交易记录
#define kGetRecording   @"http://api.yinyueke.srv/v1/teacher/traderecords?access_token=%@"
//绑定 修改银行卡
#define kCreateBank     @"http://api.yinyueke.srv/v1/bankbind/create?access_token=%@"
//获取银行卡列表
#define kGetBankList    @"http://api.yinyueke.srv/v1/bank?access_token=%@"
//上传图片
#define kPOSTImage      @"http://api.yinyueke.srv/v1/upload/%@"
//实名认证
#define kRealName       @"http://api.yinyueke.srv/v1/verifyinfo/create?access_token=%@"
//获取认证信息
#define kGetCertify     @"http://api.yinyueke.srv/v1/verify?access_token=%@"
//修改个人简介与网址
#define kUpdateMyAndURL @"http://api.yinyueke.srv/v1/teacher/%@/update?access_token=%@"
//修改手机号与邮箱
#define kUpdateE_Tel    @"http://api.yinyueke.srv/v1/account/%@/update?access_token=%@"
//新增曾获奖项
#define kAward_Add      @"http://api.yinyueke.srv/v1/teacherprize/create?access_token=%@"
//编辑曾获奖项
#define kAward_Update   @"http://api.yinyueke.srv/v1/teacherprize/%@/update?access_token=%@"
//删除曾获奖项
#define kAward_delete   @"http://api.yinyueke.srv/v1/teacherprize/%@/delete?access_token=%@"
//曾获奖项列表
#define kAward_List     @"http://api.yinyueke.srv/v1/teacherprize?access_token=%@"
//图片获取地址
#define kGet_Image      @"https://img-srv.yinyueke.com/%@"
//RSA解密
#define kDecodePassword @"http://api.yinyueke.srv/v1/rsa/decode"

//二维码
#define QRCode @"http://p.yinyueke.com/img/app_download_qrcode-student.png"
// 友盟的AppKey
#define UMENG_APPKEY @"5711e0c8e0f55ae49d0007ef"


#endif

