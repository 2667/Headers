//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSDataOperation.h"

@interface ArticlePreInsertOperation : SSDataOperation
{
}

+ (id)feedValidator;
- (long long)followRecommendFooterUniqueIdWithOrderIndex:(long long)arg1 categoryId:(id)arg2 concernId:(id)arg3;
- (long long)followRecommendHeaderUniqueIdWithOrderIndex:(long long)arg1 categoryId:(id)arg2 concernId:(id)arg3;
- (_Bool)handleFollowRecommendWithMutDic:(id)arg1 cellIdStrSet:(id)arg2 minOrderIndexP:(long long *)arg3 maxOrderIndexP:(long long *)arg4;
- (id)popularCategoryIDs;
- (void)_handleIncorrectRecords:(id)arg1;
- (void)execute:(id)arg1;

@end
