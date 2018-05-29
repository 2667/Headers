//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLLocation, NSString, SNHTTPRequestOperationWrapper, WBResultSet, WBSpot;

@interface WBSpotEngine : NSObject
{
    CLLocation *location;
    _Bool locationOffset;
    WBResultSet *spotsResultSet;
    WBResultSet *searchedSpotsResultSet;
    SNHTTPRequestOperationWrapper *fetchSpotsRequestWrapper;
    SNHTTPRequestOperationWrapper *searchSpotsRequestWrapper;
    _Bool searchCancelled;
    _Bool fetchCancelled;
    NSString *_searchHint;
    WBSpot *_defaultSpot;
}

+ (id)spotEngineWithLocation:(id)arg1;
@property(retain, nonatomic) WBSpot *defaultSpot; // @synthesize defaultSpot=_defaultSpot;
@property(retain, nonatomic) NSString *searchHint; // @synthesize searchHint=_searchHint;
@property(retain, nonatomic) WBResultSet *searchedSpotsResultSet; // @synthesize searchedSpotsResultSet;
@property(retain, nonatomic) WBResultSet *spotsResultSet; // @synthesize spotsResultSet;
@property(nonatomic) _Bool locationOffset; // @synthesize locationOffset;
@property(retain, nonatomic) CLLocation *location; // @synthesize location;
- (void).cxx_destruct;
- (void)cancelUpdating;
- (void)cancelSearching;
- (void)cancelLoading;
- (void)searchMoreSpotsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)searchSpotsWithKeyword:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)searchSpotsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateMoreSpotsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateSpotsWithExtraParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchSpotsWithExtraParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithLocation:(id)arg1;
- (id)init;

@end

