//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ATSPageMetaComponent-Protocol.h"

@class NSMutableDictionary, NSString;

@interface ATSPageMetaComponent : NSObject <ATSPageMetaComponent>
{
    _Bool _nextPage;
    NSMutableDictionary *_data;
    NSString *_startTimestamp;
    long long _totalCount;
}

@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic, getter=isNext) _Bool nextPage; // @synthesize nextPage=_nextPage;
@property(retain, nonatomic) NSString *startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)submitData;
- (void)setStartTimeStamp:(id)arg1;
- (id)startTimeStamp;
@property(nonatomic) long long pageSize;
@property(nonatomic) long long pageNum;
- (long long)nextPageNum;
@property(nonatomic, getter=isEndPage) _Bool endPage;
@property(nonatomic) long long checkMax;
- (unsigned long long)sourceType;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

