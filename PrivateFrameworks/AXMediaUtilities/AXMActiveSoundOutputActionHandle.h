//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AXMediaUtilities/AXMOutputActionHandle.h>

@interface AXMActiveSoundOutputActionHandle : AXMOutputActionHandle
{
    id <AXMActiveSoundOutputActionHandleProvider> _handleProvider;
}

@property(retain, nonatomic) id <AXMActiveSoundOutputActionHandleProvider> handleProvider; // @synthesize handleProvider=_handleProvider;
- (void).cxx_destruct;
- (void)setQuantizedRate:(long long)arg1;
@property(nonatomic) float rate;
@property(nonatomic) float pitch;
- (void)stop;

@end

