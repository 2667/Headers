//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CMShowPetDataManager : NSObject
{
}

+ (id)sharedManager;
- (id)petConfigForRoleId:(unsigned long long)arg1;
- (void)loadActionResWithIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadPetDataWithRoleId:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadPetDataWithRoleIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)randomActionIdForRoleId:(long long)arg1;

@end
