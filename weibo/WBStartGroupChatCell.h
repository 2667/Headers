//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBContactPickerViewCell.h"

@class UIImageView;

@interface WBStartGroupChatCell : WBContactPickerViewCell
{
    _Bool _isSearching;
    UIImageView *_separatorView;
    UIImageView *_reverseSeparatorView;
}

@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(retain, nonatomic) UIImageView *reverseSeparatorView; // @synthesize reverseSeparatorView=_reverseSeparatorView;
@property(retain, nonatomic) UIImageView *separatorView; // @synthesize separatorView=_separatorView;
- (void).cxx_destruct;
- (void)drawCustomSeparateLineWithPosition:(unsigned long long)arg1 isSearching:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

