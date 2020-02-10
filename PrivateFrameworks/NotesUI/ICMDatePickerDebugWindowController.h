//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSDatePicker, NSTextField;

@interface ICMDatePickerDebugWindowController : NSWindowController
{
    unsigned char _windowType;
    NSDatePicker *_datePicker;
    NSTextField *_dateLabel;
    id _representedObject;
}

+ (id)datePickerWindowWithType:(unsigned char)arg1 representedObject:(id)arg2;
@property(nonatomic) unsigned char windowType; // @synthesize windowType=_windowType;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property __weak NSTextField *dateLabel; // @synthesize dateLabel=_dateLabel;
@property __weak NSDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)setDate:(id)arg1;
- (void)datePickerAction:(id)arg1;
- (void)windowDidLoad;
- (id)initWithWindowType:(unsigned char)arg1 representedObject:(id)arg2;

@end
