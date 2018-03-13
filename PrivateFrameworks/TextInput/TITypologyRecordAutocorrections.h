//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInput/TITypologyRecord.h>

@class TIAutocorrectionList, TIKeyboardState;

@interface TITypologyRecordAutocorrections : TITypologyRecord
{
    BOOL _listUIDisplayed;
    TIKeyboardState *_keyboardState;
    TIAutocorrectionList *_autocorrections;
}

@property(nonatomic) BOOL listUIDisplayed; // @synthesize listUIDisplayed=_listUIDisplayed;
@property(retain, nonatomic) TIAutocorrectionList *autocorrections; // @synthesize autocorrections=_autocorrections;
@property(retain, nonatomic) TIKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
- (id)shortDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)applyToStatistic:(id)arg1;

@end

