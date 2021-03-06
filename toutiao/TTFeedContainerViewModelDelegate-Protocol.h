//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSString;

@protocol TTFeedContainerViewModelDelegate <NSObject>
- (unsigned long long)refer;
- (Class)orderedDataClass;
- (unsigned long long)listLocation;
- (unsigned long long)listType;
- (NSString *)categoryID;
- (NSString *)concernID;
- (NSString *)methodForHTTPRequst;
- (NSString *)URLStringForHTTPRequst;

@optional
- (_Bool)needPesistence;
- (_Bool)asyncPersistence;
- (unsigned long long)loadMoreCount;
- (void)didFinshAllOperations;
- (void)didFetchDataformRemote:(_Bool)arg1 error:(NSError *)arg2;
- (_Bool)hasPostInterestWords;
- (NSDictionary *)postParamsForHTTPRequest;
- (NSDictionary *)getParamsForHTTPRequest;
@end

