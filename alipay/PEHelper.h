//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PEHelper : NSObject
{
}

+ (id)boolToStringCode:(_Bool)arg1;
+ (void)reportPaymentResult:(struct MQPResult *)arg1;
+ (void)reportCreateBillResultOfRequestPayment:(id)arg1;
+ (void)reportCreateBillResult:(id)arg1;
+ (void)reportIfNoQrCodeImage:(id)arg1 code:(id)arg2;
+ (void)reportIfNotCurrentApp;
+ (id)loginUserInfo;
+ (id)loginUserNick;
+ (id)loginUserIcon;
+ (id)loginUserId;
+ (void)writeLogWithActionId:(id)arg1 spm:(id)arg2 ext:(id)arg3;
+ (void)addNotification:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
+ (id)token;
+ (id)since1970TimeString;
+ (void)openHybridUrl:(id)arg1;
+ (void)forceExitSpecifyViewController:(id)arg1 inApp:(id)arg2;
+ (id)formatedMoney:(id)arg1;
+ (id)formatedAmount:(id)arg1;
+ (_Bool)isNumberOrDecimalWithString:(id)arg1;
+ (struct CGSize)sizeForString:(id)arg1 font:(id)arg2 constraintSize:(struct CGSize)arg3;
+ (struct CGSize)sizeForString:(id)arg1 font:(id)arg2 forWidth:(double)arg3;
+ (struct CGSize)sizeForString:(id)arg1 font:(id)arg2;
+ (id)peColorFromHexRGB:(id)arg1;
+ (id)peSupportedColorString:(id)arg1;
+ (id)peRgbFromString:(id)arg1;
+ (_Bool)peIsPlusDevice;
+ (_Bool)peIsMiniDevice;
+ (_Bool)peIsIOS7;
+ (_Bool)peIsIPad;
+ (id)peDefaultHeadImage;
+ (id)peImageWithNamed:(id)arg1;
+ (_Bool)isEmptyArray:(id)arg1;
+ (_Bool)isValidString:(id)arg1;
+ (long long)integerConfigForKey:(id)arg1 defaultValue:(long long)arg2;
+ (_Bool)booleanConfigForKey:(id)arg1 defaultValue:(_Bool)arg2;
+ (id)getLaunchArgument:(id)arg1;
+ (void)exitCurrentApplication;

@end
