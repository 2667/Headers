//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface _directionalGroupRelationship : NSObject
{
}

+ (_Bool)deleteRelectionshipByUserID:(id)arg1 andGroupID:(id)arg2 inDatabase:(id)arg3;
+ (_Bool)deleteRelectionshipByGroupID:(id)arg1 inDatabase:(id)arg2;
+ (_Bool)deleteRelectionshipByUserID:(id)arg1 inDatabase:(id)arg2;
+ (_Bool)deleteAllRelectionshipsInDatabase:(id)arg1;
+ (_Bool)addRelectionShipByUserID:(id)arg1 andGroupID:(id)arg2 inDatabase:(id)arg3;
+ (unsigned long long)groupCountByUserID:(id)arg1 inDatabase:(id)arg2;
+ (unsigned long long)userCountInGroup:(id)arg1 inDatabase:(id)arg2;
+ (id)allGroupIDByUser:(id)arg1 inDatabase:(id)arg2;
+ (id)allUserIDByGroup:(id)arg1 inDatabase:(id)arg2;

@end

