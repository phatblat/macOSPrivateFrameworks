//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface EXReference : NSObject
{
}

+ (id)xmlRangesFromDiscontinuousReferences:(id)arg1;
+ (id)edDiscontinousReferencesFromXmlRanges:(id)arg1;
+ (id)edReferenceFromXmlReference:(id)arg1;
+ (id)xmlReferenceFromEDReference:(id)arg1;
+ (id)xmlReferenceFromAreaReference:(struct EDAreaReference *)arg1;
+ (_Bool)edAreaReferenceFromXmlReference:(id)arg1 areaReference:(struct EDAreaReference *)arg2;
+ (id)numberToStringBase26:(int)arg1;

@end

