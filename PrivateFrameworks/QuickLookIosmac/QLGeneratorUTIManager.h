//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QLGeneratorUTIManager : NSObject
{
}

+ (void)_clearTestGenerators;
+ (void)_setTestDatabaseWithMockGenerators:(id)arg1;
+     // Error parsing type: v32@0:8^{__QLGenerator={__CFRuntimeBase=QAQ}^{__CFURL}^{__CFBundle}^{__CFString}*^{__CFString}^{__CFString}^{__CFArray}^vC@d@^?^?^?^?CCCCCd{CGSize=dd}C^v^viCCCCCC}16@24, name: _setupTestGenerator:withDisplayBundleID:
+ (BOOL)isUsingTestDatabase;
+ (BOOL)_shouldUseLegacyGeneratorForType:(id)arg1 extensionType:(unsigned long long)arg2;
+ (BOOL)shouldUseLegacyGeneratorForPreviewType:(id)arg1;
+ (BOOL)shouldUseLegacyGeneratorForThumbnailType:(id)arg1;

@end
