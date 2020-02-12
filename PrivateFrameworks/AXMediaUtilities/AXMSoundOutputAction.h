//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AXMediaUtilities/AXMOutputAction.h>

@class NSString, NSURL;

@interface AXMSoundOutputAction : AXMOutputAction
{
    NSString *_soundID;
    NSURL *_soundFileURL;
}

+ (id)_soundFileURLForSoundID:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *soundID;
@property(readonly, nonatomic) NSURL *soundFileURL;
- (id)initWithSoundID:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)_initWithSoundID:(id)arg1 handle:(id)arg2;
- (id)_initWithURL:(id)arg1 handle:(id)arg2;

@end

