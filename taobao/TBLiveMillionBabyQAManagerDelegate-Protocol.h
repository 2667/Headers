//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TBLiveMillionBabyQAManagerDelegate <NSObject>
- (void)requestSubmitWithGameId:(NSString *)arg1 examNum:(NSString *)arg2 selectValue:(NSString *)arg3 completion:(void (^)(_Bool, NSString *, NSString *, NSError *, _Bool, _Bool))arg4;
- (void)requestReviveWithGameId:(NSString *)arg1 examNum:(NSString *)arg2 completion:(void (^)(_Bool, NSString *, NSError *))arg3;
- (void)updateUnlimitCountWith:(NSString *)arg1;
- (void)updateReviveCountWith:(NSString *)arg1;
- (void)QATimeEndedWithResultUrl:(NSString *)arg1;
- (void)playAudioWithFileName:(NSString *)arg1 vibrate:(_Bool)arg2;
- (void)showShareContainer;
@end

