//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSPasteboardReading.h"
#import "NSPasteboardWriting.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface SidecarPasteboardInfo : NSObject <NSSecureCoding, NSPasteboardReading, NSPasteboardWriting>
{
    NSString *_serviceName;
    NSString *_localizedItemName;
    NSArray *_preferredTypes;
}

+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *preferredTypes; // @synthesize preferredTypes=_preferredTypes;
@property(retain, nonatomic) NSString *localizedItemName; // @synthesize localizedItemName=_localizedItemName;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

