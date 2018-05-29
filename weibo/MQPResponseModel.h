//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MQPNormalTrack, NSArray, NSDictionary, NSNumber, NSString;

@interface MQPResponseModel : NSObject
{
    NSString *_code;
    NSString *_errMsg;
    NSString *_memo;
    NSString *_result;
    NSString *_endCode;
    NSString *_synch;
    NSString *_tradeNo;
    NSNumber *_wpage;
    NSNumber *_noBack;
    NSString *_uname;
    NSString *_uurl;
    NSString *_tplid;
    NSString *_tpl;
    NSDictionary *_data;
    NSNumber *_time;
    NSNumber *_uac;
    NSNumber *_dg;
    NSDictionary *_wnd;
    NSDictionary *_page;
    NSString *_session;
    NSString *_tid;
    NSString *_clientKey;
    NSNumber *_ajax;
    NSNumber *_iajax;
    NSDictionary *_onload;
    NSString *_userId;
    NSString *_pkey;
    NSDictionary *_extinfo;
    NSArray *_tpls;
    MQPNormalTrack *_track;
}

+ (long long)getZipTypeFromHeader:(id)arg1;
@property(retain, nonatomic) MQPNormalTrack *track; // @synthesize track=_track;
@property(retain, nonatomic) NSArray *tpls; // @synthesize tpls=_tpls;
@property(retain, nonatomic) NSDictionary *extinfo; // @synthesize extinfo=_extinfo;
@property(retain, nonatomic) NSString *pkey; // @synthesize pkey=_pkey;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSDictionary *onload; // @synthesize onload=_onload;
@property(retain, nonatomic) NSNumber *iajax; // @synthesize iajax=_iajax;
@property(retain, nonatomic) NSNumber *ajax; // @synthesize ajax=_ajax;
@property(retain, nonatomic) NSString *clientKey; // @synthesize clientKey=_clientKey;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *session; // @synthesize session=_session;
@property(retain, nonatomic) NSDictionary *page; // @synthesize page=_page;
@property(retain, nonatomic) NSDictionary *wnd; // @synthesize wnd=_wnd;
@property(retain, nonatomic) NSNumber *dg; // @synthesize dg=_dg;
@property(retain, nonatomic) NSNumber *uac; // @synthesize uac=_uac;
@property(retain, nonatomic) NSNumber *time; // @synthesize time=_time;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *tpl; // @synthesize tpl=_tpl;
@property(retain, nonatomic) NSString *tplid; // @synthesize tplid=_tplid;
@property(retain, nonatomic) NSString *uurl; // @synthesize uurl=_uurl;
@property(retain, nonatomic) NSString *uname; // @synthesize uname=_uname;
@property(retain, nonatomic) NSNumber *noBack; // @synthesize noBack=_noBack;
@property(retain, nonatomic) NSNumber *wpage; // @synthesize wpage=_wpage;
@property(retain, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
@property(retain, nonatomic) NSString *synch; // @synthesize synch=_synch;
@property(retain, nonatomic) NSString *endCode; // @synthesize endCode=_endCode;
@property(retain, nonatomic) NSString *result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)parseFromData:(id)arg1 withHeader:(id)arg2 isLog:(_Bool)arg3;
- (void)parseFromDict:(id)arg1;
- (void)parseFromPBv2:(id)arg1;

@end

