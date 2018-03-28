//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ExploreOriginalData.h"

@class FRCommonUserStructModel, NSArray, NSDictionary, NSString;

@interface MomentsRecommendUserData : ExploreOriginalData
{
    NSArray *_userCardModels;
    NSString *_title;
    NSDictionary *_friend;
    NSArray *_follows;
    FRCommonUserStructModel *_friendUserModel;
}

+ (id)keyMapping;
+ (id)persistentProperties;
+ (id)primaryKey;
+ (id)dbName;
@property(retain, nonatomic) FRCommonUserStructModel *friendUserModel; // @synthesize friendUserModel=_friendUserModel;
@property(retain, nonatomic) NSArray *follows; // @synthesize follows=_follows;
@property(retain, nonatomic) NSDictionary *friend; // @synthesize friend=_friend;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setFollowing:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (void)blockNotification:(id)arg1;
- (void)removeObserveNotification;
- (void)addObserveNotification;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) NSArray *userCardModels; // @synthesize userCardModels=_userCardModels;
- (void)updateWithDictionary:(id)arg1;

@end
