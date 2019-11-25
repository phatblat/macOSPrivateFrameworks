//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TemplateKit/TLKView.h>

#import "NUIContainerViewDelegate.h"

@class NSArray, NSMutableArray, NSString, NUIContainerGridView;

@interface TLKSelectableGridView : TLKView <NUIContainerViewDelegate>
{
    long long _selectedIndex;
    NSArray *_tuples;
    id <TLKSelectableGridViewDelegate> _delegate;
    NSMutableArray *_buttons;
}

+ (unsigned long long)idealNumberOfColumnsForTitles:(id)arg1 fittingSize:(struct CGSize)arg2 containerView:(id)arg3;
+ (unsigned long long)maxColumns;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property __weak id <TLKSelectableGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *tuples; // @synthesize tuples=_tuples;
- (void).cxx_destruct;
- (id)arrangedEntrySubviews;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)selectableGridButtonPressed:(id)arg1;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (id)_createButton;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (void)observedPropertiesChanged;
- (id)setupContentView;

// Remaining properties
@property(retain, nonatomic) NUIContainerGridView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

