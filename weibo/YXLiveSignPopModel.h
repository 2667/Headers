//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface YXLiveSignPopModel : NSObject
{
    long long _sign_days;
    long long _today_sign;
    NSString *_sign_description;
}

@property(retain, nonatomic) NSString *sign_description; // @synthesize sign_description=_sign_description;
@property(nonatomic) long long today_sign; // @synthesize today_sign=_today_sign;
@property(nonatomic) long long sign_days; // @synthesize sign_days=_sign_days;
- (void).cxx_destruct;

@end

