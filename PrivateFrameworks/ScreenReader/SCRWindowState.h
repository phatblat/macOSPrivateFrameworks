//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface SCRWindowState : NSObject
{
    struct CGPoint _sourceOrigin;
    struct CGPoint _destinationOrigin;
    BOOL _needToRestoreWindowPosition;
    BOOL _needToRestoreDesktop;
}

@property(nonatomic) BOOL needToRestoreDesktop; // @synthesize needToRestoreDesktop=_needToRestoreDesktop;
@property(nonatomic) BOOL needToRestoreWindowPosition; // @synthesize needToRestoreWindowPosition=_needToRestoreWindowPosition;
@property struct CGPoint destinationOrigin; // @synthesize destinationOrigin=_destinationOrigin;
@property struct CGPoint sourceOrigin; // @synthesize sourceOrigin=_sourceOrigin;

@end
