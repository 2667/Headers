//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, SNHTTPRequestOperationWrapper;

@interface WBPhotoRecommendViewModel : NSObject
{
    _Bool _loading;
    _Bool _hasMore;
    NSString *_mid;
    NSMutableArray *_recommends;
    NSString *_extraInfo;
    unsigned long long _pageIndex;
    SNHTTPRequestOperationWrapper *_wrapper;
}

+ (id)cacheKeyWithMid:(id)arg1 page:(long long)arg2;
+ (id)sharedCache;
@property(nonatomic) __weak SNHTTPRequestOperationWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(copy, nonatomic) NSString *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSMutableArray *recommends; // @synthesize recommends=_recommends;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long currentPageIndex;
- (void)cancel;
- (void)loadMoreRecommendsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchRecommendsWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestWithCompletion:(CDUnknownBlockType)arg1 loadMore:(_Bool)arg2;
- (id)initWithMid:(id)arg1;
- (void)dealloc;

@end

