//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSButton, NSImageView, NSTextField;

@interface PKUICredentialRowView : NSTableCellView
{
    NSImageView *_cardIcon;
    NSTextField *_cardLastDigits;
    NSButton *_cardSelected;
}

@property __weak NSButton *cardSelected; // @synthesize cardSelected=_cardSelected;
@property __weak NSTextField *cardLastDigits; // @synthesize cardLastDigits=_cardLastDigits;
@property __weak NSImageView *cardIcon; // @synthesize cardIcon=_cardIcon;
- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)arg1;

@end

