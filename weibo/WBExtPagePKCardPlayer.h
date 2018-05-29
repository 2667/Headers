//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSDictionary, NSString;

@interface WBExtPagePKCardPlayer : WBModelObject
{
    _Bool _last_support;
    NSString *_text;
    NSString *_img_url;
    NSString *_large_img_url;
    NSString *_scheme;
    NSString *_desc;
    long long _count;
    NSString *_count_suffix;
    NSString *_btn_text;
    NSString *_btn_scheme;
    NSDictionary *_support_params;
    long long _supported_count;
    long long _support_count_toplimit;
    NSString *_center_img_url;
    NSString *_center_img_desc;
    NSString *_bellow_img_url;
    NSString *_request_url;
}

@property(retain, nonatomic) NSString *request_url; // @synthesize request_url=_request_url;
@property(copy, nonatomic) NSString *bellow_img_url; // @synthesize bellow_img_url=_bellow_img_url;
@property(copy, nonatomic) NSString *center_img_desc; // @synthesize center_img_desc=_center_img_desc;
@property(copy, nonatomic) NSString *center_img_url; // @synthesize center_img_url=_center_img_url;
@property(nonatomic) long long support_count_toplimit; // @synthesize support_count_toplimit=_support_count_toplimit;
@property(nonatomic) long long supported_count; // @synthesize supported_count=_supported_count;
@property(nonatomic) _Bool last_support; // @synthesize last_support=_last_support;
@property(retain, nonatomic) NSDictionary *support_params; // @synthesize support_params=_support_params;
@property(copy, nonatomic) NSString *btn_scheme; // @synthesize btn_scheme=_btn_scheme;
@property(copy, nonatomic) NSString *btn_text; // @synthesize btn_text=_btn_text;
@property(copy, nonatomic) NSString *count_suffix; // @synthesize count_suffix=_count_suffix;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(copy, nonatomic) NSString *large_img_url; // @synthesize large_img_url=_large_img_url;
@property(copy, nonatomic) NSString *img_url; // @synthesize img_url=_img_url;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end

