//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIButton, UIImageView, UILabel;
@protocol MBKManulPayViewCellSelectDelegate;

@interface MBKManulPayViewCell : UITableViewCell
{
    _Bool _isSelected;
    UILabel *_descLabel;
    UIImageView *_selectedImageView;
    NSString *_reasonString;
    UIButton *_selectButton;
    id <MBKManulPayViewCellSelectDelegate> _delegate;
    long long _itemTag;
}

+ (id)identifier;
@property(nonatomic) long long itemTag; // @synthesize itemTag=_itemTag;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) __weak id <MBKManulPayViewCellSelectDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(retain, nonatomic) NSString *reasonString; // @synthesize reasonString=_reasonString;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
- (void)setUpViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
