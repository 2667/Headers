//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface KSLiveQuizInvolveChange : NSObject
{
    long long _currentStatus;
    NSNumber *_questionNum;
    NSString *_choiceId;
    NSString *_correctId;
    long long _reviveCardNum;
}

- (void).cxx_destruct;
- (long long)nextInvolveStatus;
- (void)changeNextWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithCurrentStatus:(long long)arg1 question:(id)arg2 avaliableReviveCardNum:(long long)arg3;
- (id)initWithCurrentStatus:(long long)arg1 questionNum:(id)arg2 choiceOptionId:(id)arg3 correctOptionId:(id)arg4 avaliableReviveCardNum:(long long)arg5;

@end
