//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TTFQuestionTrace : NSObject
{
    _Bool _wsHt;
    _Bool _isClick;
    _Bool _isTout;
    int _status;
    int _auth;
    int _lifes;
    long long _aid;
    long long _qid;
    long long _rt;
    long long _ht;
    long long _startT;
    long long _showT;
    long long _leftT;
    long long _clickT;
    long long _passT;
    long long _optionId;
    long long _netSubT1;
    long long _netRecT1;
    long long _netSubT2;
    long long _netRecT2;
    long long _netSubT3;
    long long _netRecT3;
    NSString *_res;
    NSString *_extra;
}

@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(nonatomic) int lifes; // @synthesize lifes=_lifes;
@property(nonatomic) _Bool isTout; // @synthesize isTout=_isTout;
@property(copy, nonatomic) NSString *res; // @synthesize res=_res;
@property(nonatomic) long long netRecT3; // @synthesize netRecT3=_netRecT3;
@property(nonatomic) long long netSubT3; // @synthesize netSubT3=_netSubT3;
@property(nonatomic) long long netRecT2; // @synthesize netRecT2=_netRecT2;
@property(nonatomic) long long netSubT2; // @synthesize netSubT2=_netSubT2;
@property(nonatomic) long long netRecT1; // @synthesize netRecT1=_netRecT1;
@property(nonatomic) long long netSubT1; // @synthesize netSubT1=_netSubT1;
@property(nonatomic) long long optionId; // @synthesize optionId=_optionId;
@property(nonatomic) long long passT; // @synthesize passT=_passT;
@property(nonatomic) long long clickT; // @synthesize clickT=_clickT;
@property(nonatomic) _Bool isClick; // @synthesize isClick=_isClick;
@property(nonatomic) long long leftT; // @synthesize leftT=_leftT;
@property(nonatomic) long long showT; // @synthesize showT=_showT;
@property(nonatomic) int auth; // @synthesize auth=_auth;
@property(nonatomic) long long startT; // @synthesize startT=_startT;
@property(nonatomic) _Bool wsHt; // @synthesize wsHt=_wsHt;
@property(nonatomic) long long ht; // @synthesize ht=_ht;
@property(nonatomic) long long rt; // @synthesize rt=_rt;
@property(nonatomic) long long qid; // @synthesize qid=_qid;
@property(nonatomic) long long aid; // @synthesize aid=_aid;
@property(nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)traceDict;
- (id)initWithHeartBeatTrace:(id)arg1;

@end

