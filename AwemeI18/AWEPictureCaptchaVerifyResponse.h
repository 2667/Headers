//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSNumber, NSString;

@interface AWEPictureCaptchaVerifyResponse : AWEBaseApiModel
{
    NSNumber *_chanceUsed;
    NSNumber *_chanceLeft;
    NSNumber *_chanceUsedForFailure;
    NSNumber *_chanceLeftForFailure;
    NSString *_message;
    NSString *_prompts;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *prompts; // @synthesize prompts=_prompts;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSNumber *chanceLeftForFailure; // @synthesize chanceLeftForFailure=_chanceLeftForFailure;
@property(retain, nonatomic) NSNumber *chanceUsedForFailure; // @synthesize chanceUsedForFailure=_chanceUsedForFailure;
@property(retain, nonatomic) NSNumber *chanceLeft; // @synthesize chanceLeft=_chanceLeft;
@property(retain, nonatomic) NSNumber *chanceUsed; // @synthesize chanceUsed=_chanceUsed;
- (void).cxx_destruct;

@end

