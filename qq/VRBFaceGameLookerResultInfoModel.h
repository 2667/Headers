//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/VRBFaceGameBaseModel.h>

@class NSString;

@interface VRBFaceGameLookerResultInfoModel : VRBFaceGameBaseModel
{
    int _exceptiontype;
    int _resultCode;
    int _totalScores;
    int _scores;
    int _playerGameState;
    NSString *_money;
    NSString *_resultState;
}

@property(nonatomic) int playerGameState; // @synthesize playerGameState=_playerGameState;
@property(nonatomic) int scores; // @synthesize scores=_scores;
@property(nonatomic) int totalScores; // @synthesize totalScores=_totalScores;
@property(retain, nonatomic) NSString *resultState; // @synthesize resultState=_resultState;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
@property(retain, nonatomic) NSString *money; // @synthesize money=_money;
@property(nonatomic) int exceptiontype; // @synthesize exceptiontype=_exceptiontype;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
