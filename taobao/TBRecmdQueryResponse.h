//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBRecmdQueryResponse-Protocol.h"

@class NSArray, NSDictionary, NSString, TBRecmdRootModel;
@protocol TBSDKErrorRule;

@interface TBRecmdQueryResponse : NSObject <TBRecmdQueryResponse>
{
    _Bool _formatCleaned;
    _Bool _empty;
    TBRecmdRootModel *_rootInfo;
    unsigned long long _pageNum;
    NSDictionary *_responseDict;
    NSString *_tips;
    NSArray *_resultArray;
    id <TBSDKErrorRule> _responseError;
    unsigned long long _totalItem;
    NSString *_currentTime;
    NSDictionary *_resultDic;
    NSString *_rootKey;
    NSArray *_keys;
    NSString *_scm;
    NSString *_pvid;
}

@property(retain, nonatomic) NSString *pvid; // @synthesize pvid=_pvid;
@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(retain, nonatomic) NSArray *keys; // @synthesize keys=_keys;
@property(retain, nonatomic) NSString *rootKey; // @synthesize rootKey=_rootKey;
@property(nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=_empty;
@property(retain, nonatomic) NSDictionary *resultDic; // @synthesize resultDic=_resultDic;
@property(nonatomic) NSString *currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) unsigned long long totalItem; // @synthesize totalItem=_totalItem;
@property(retain, nonatomic) id <TBSDKErrorRule> responseError; // @synthesize responseError=_responseError;
@property(retain, nonatomic) NSArray *resultArray; // @synthesize resultArray=_resultArray;
@property(nonatomic) _Bool formatCleaned; // @synthesize formatCleaned=_formatCleaned;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSDictionary *responseDict; // @synthesize responseDict=_responseDict;
@property(nonatomic) unsigned long long pageNum; // @synthesize pageNum=_pageNum;
@property(retain, nonatomic) TBRecmdRootModel *rootInfo; // @synthesize rootInfo=_rootInfo;
- (void).cxx_destruct;
- (id)error;
- (id)errorCode;
- (id)errorMsg;
- (long long)pageTotal;
- (long long)itemLastCount;
- (_Bool)isEndPage;
- (id)cardResultArray;
- (id)recommandResultArray;
- (_Bool)isDataExpired;
- (id)initWithData:(id)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
