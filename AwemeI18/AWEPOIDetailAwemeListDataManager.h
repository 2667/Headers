//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

@class NSNumber, NSString;

@interface AWEPOIDetailAwemeListDataManager : AWEListDataController
{
    _Bool _hasMore;
    NSString *_poiID;
    unsigned long long _type;
    NSNumber *_cursor;
}

@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *poiID; // @synthesize poiID=_poiID;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (void).cxx_destruct;
- (_Bool)canLoadMore;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)initFetchWithCompletion:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPoiID:(id)arg1 type:(unsigned long long)arg2;

@end

