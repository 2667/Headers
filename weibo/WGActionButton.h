//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDWGButton.h"

@class NSString;

@interface WGActionButton : SDWGButton
{
    NSString *_kind;
    long long _useType;
}

+ (id)buttonWithType:(long long)arg1 useType:(long long)arg2;
@property(nonatomic) long long useType; // @synthesize useType=_useType;
@property(retain, nonatomic) NSString *kind; // @synthesize kind=_kind;
- (void).cxx_destruct;

@end

