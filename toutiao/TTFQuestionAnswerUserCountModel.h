//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TTFQuestionAnswerUserCountModel : NSObject
{
    long long _questionNumber;
    long long _answerUserCount;
    long long _answerCorrectUserCount;
}

@property(nonatomic) long long answerCorrectUserCount; // @synthesize answerCorrectUserCount=_answerCorrectUserCount;
@property(nonatomic) long long answerUserCount; // @synthesize answerUserCount=_answerUserCount;
@property(nonatomic) long long questionNumber; // @synthesize questionNumber=_questionNumber;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithQuestionNumber:(long long)arg1 answerUserCount:(long long)arg2 answerCorrectUserCount:(long long)arg3;
- (id)init;

@end

