//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol YXMillionaireAnswerManagerDelegate <NSObject>
- (void)yxMillionaireDidFailureWithCode:(NSDictionary *)arg1;
- (void)yxMillionaireDidReceivePullingInfo:(NSDictionary *)arg1;
- (void)yxMillionaireAnswerQuestionWithError;
- (void)yxMillionaireDidAnswerQuestion;
- (void)yxyxMillionaireGetAnswerQualified:(NSDictionary *)arg1 result:(_Bool)arg2;
- (void)yxMillionaireDidReceiveQuestionInfo:(NSDictionary *)arg1;
@end

