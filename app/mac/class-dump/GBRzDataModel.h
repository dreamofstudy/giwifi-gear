//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSDictionary<Optional>, NSNumber<Optional>, NSString<Optional>;

@interface GBRzDataModel : JSONModel
{
    NSNumber<Optional> *_mode;
    NSNumber<Optional> *_userType;
    NSString<Optional> *_userToken;
    NSString<Optional> *_showtext;
    NSString<Optional> *_tips;
    NSString<Optional> *_third_auth_url;
    NSString<Optional> *_redirect_url;
    NSNumber<Optional> *_checkPhone;
    NSNumber<Optional> *_limitTime;
    NSNumber<Optional> *_willStop;
    NSNumber<Optional> *_show_wechat_page_enable;
    NSString<Optional> *_send_phone;
    NSString<Optional> *_send_content;
    NSDictionary<Optional> *_event;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary<Optional> *event; // @synthesize event=_event;
@property(retain, nonatomic) NSString<Optional> *send_content; // @synthesize send_content=_send_content;
@property(retain, nonatomic) NSString<Optional> *send_phone; // @synthesize send_phone=_send_phone;
@property(retain, nonatomic) NSNumber<Optional> *show_wechat_page_enable; // @synthesize show_wechat_page_enable=_show_wechat_page_enable;
@property(nonatomic) NSNumber<Optional> *willStop; // @synthesize willStop=_willStop;
@property(nonatomic) NSNumber<Optional> *limitTime; // @synthesize limitTime=_limitTime;
@property(nonatomic) NSNumber<Optional> *checkPhone; // @synthesize checkPhone=_checkPhone;
@property(retain, nonatomic) NSString<Optional> *redirect_url; // @synthesize redirect_url=_redirect_url;
@property(retain, nonatomic) NSString<Optional> *third_auth_url; // @synthesize third_auth_url=_third_auth_url;
@property(retain, nonatomic) NSString<Optional> *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSString<Optional> *showtext; // @synthesize showtext=_showtext;
@property(retain, nonatomic) NSString<Optional> *userToken; // @synthesize userToken=_userToken;
@property(nonatomic) NSNumber<Optional> *userType; // @synthesize userType=_userType;
@property(nonatomic) NSNumber<Optional> *mode; // @synthesize mode=_mode;

@end

