//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXTileIdentifierConverter.h"

@class NSString;

@interface PXTileIdentifierZeroConverter : NSObject <PXTileIdentifierConverter>
{
}

- (BOOL)reverseTransformTileIdentifier:(struct PXTileIdentifier *)arg1;
- (BOOL)transformTileIdentifier:(struct PXTileIdentifier *)arg1 group:(unsigned long long *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

