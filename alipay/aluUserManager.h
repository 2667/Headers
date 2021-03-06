//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface aluUserManager : NSObject
{
    NSMutableArray *_alipayUserArray;
}

+ (id)userInfoFromLoginResult:(id)arg1;
+ (void)deleteAllUsersArchive;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)alipayPreferLoginId:(id)arg1;
- (id)tbPreferLoginId:(id)arg1;
- (id)userIdWithLoginId:(id)arg1;
- (void)removeUser:(id)arg1;
- (id)allUsers;
- (id)alipayUsers;
- (_Bool)removeAlipayUser:(id)arg1;
- (void)addAlipayUser:(id)arg1;
- (id)findUserByLoginId:(id)arg1;
- (void)loadAlipayUsersFromArchive;
- (void)loadFromArchive;
- (void)saveAlipayUserToArchive;
- (void)saveToArchive;
- (id)init;

@end

