//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSLayoutConstraint, NSTextField;

__attribute__((visibility("hidden")))
@interface SafeAutoFillChoicesMenuItemView : NSView
{
    NSTextField *_sectionTitleLabel;
    NSTextField *_contentValueLabel;
    NSLayoutConstraint *_sectionTitleLabelLeadingConstraint;
    NSLayoutConstraint *_contentValueLabelLeadingConstraint;
    NSLayoutConstraint *_constraintBetweenLabels;
}

+ (id)doNotFillText;
@property(nonatomic) __weak NSLayoutConstraint *constraintBetweenLabels; // @synthesize constraintBetweenLabels=_constraintBetweenLabels;
@property(nonatomic) __weak NSLayoutConstraint *contentValueLabelLeadingConstraint; // @synthesize contentValueLabelLeadingConstraint=_contentValueLabelLeadingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *sectionTitleLabelLeadingConstraint; // @synthesize sectionTitleLabelLeadingConstraint=_sectionTitleLabelLeadingConstraint;
@property(nonatomic) __weak NSTextField *contentValueLabel; // @synthesize contentValueLabel=_contentValueLabel;
@property(nonatomic) __weak NSTextField *sectionTitleLabel; // @synthesize sectionTitleLabel=_sectionTitleLabel;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

