//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>

@interface CommonCardModel : NSObject <NSCoding>
{
    long long _uin;
    long long _voteCount;
    long long _lFavoriteCount;
}

@property(nonatomic) long long lFavoriteCount; // @synthesize lFavoriteCount=_lFavoriteCount;
@property(nonatomic) long long voteCount; // @synthesize voteCount=_voteCount;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithQQUIN:(long long)arg1;

@end
