//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentSetupField.h>

@class NSArray, PKPaymentSetupFieldPickerItem;

@interface PKPaymentSetupFieldPicker : PKPaymentSetupField
{
    NSArray *_pickerItems;
}

@property(copy, nonatomic) NSArray *pickerItems; // @synthesize pickerItems=_pickerItems;
- (void).cxx_destruct;
- (BOOL)submissionStringMeetsAllRequirements;
- (id)_submissionStringForValue:(id)arg1;
- (id)displayString;
@property(copy, nonatomic) PKPaymentSetupFieldPickerItem *currentValue; // @dynamic currentValue;
- (void)_commonUpdate;
- (void)updateWithConfiguration:(id)arg1;
- (unsigned long long)fieldType;

@end

