//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQRelationSearchFilter.h>

@class NSArray;

@interface QQFriendSearchFilter : QQRelationSearchFilter
{
    NSArray *_friends;
    long long _type;
}

+ (id)tryMatchAccount:(id)arg1 keyword:(id)arg2 searchType:(long long)arg3;
+ (id)tryMatchNickAndRemark:(id)arg1 keyword:(id)arg2 searchType:(long long)arg3;
+ (id)tryMatchNickAndRemark:(id)arg1 keyword:(id)arg2 searchType:(long long)arg3 isNeedAIBlurMatch:(_Bool)arg4;
+ (id)searchFriendModel:(id)arg1 keyword:(id)arg2 searchType:(long long)arg3;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *friends; // @synthesize friends=_friends;
- (void).cxx_destruct;
- (id)copyAllSearchResults:(id)arg1 excludeUinList:(id)arg2;
- (id)accurateSearch:(id)arg1;
- (id)initWithSearchType:(long long)arg1;

@end

