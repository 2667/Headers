//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPDataRequest.h"

@class NSMutableArray;

@interface AMPBatchGetSessionInfoRequest : AMPDataRequest
{
    _Bool _needCreate;
    NSMutableArray *_listNeedFetchCCode;
    double _expiredTime;
}

@property(nonatomic) _Bool needCreate; // @synthesize needCreate=_needCreate;
@property(nonatomic) double expiredTime; // @synthesize expiredTime=_expiredTime;
@property(retain, nonatomic) NSMutableArray *listNeedFetchCCode; // @synthesize listNeedFetchCCode=_listNeedFetchCCode;
- (void).cxx_destruct;
- (void)netUpdateFail:(id)arg1;
- (_Bool)isExpired:(id)arg1;
- (id)parseMtopData:(id)arg1;
- (id)generatePacket;
- (void)dbSave:(id)arg1;
- (id)dbRead:(id)arg1;
- (void)memorySave:(id)arg1;
- (id)memoryRead:(_Bool *)arg1;
- (id)initWithCCodeList:(id)arg1 needCreate:(_Bool)arg2;

@end
