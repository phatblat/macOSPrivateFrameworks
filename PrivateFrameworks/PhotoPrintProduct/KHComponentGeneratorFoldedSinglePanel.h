//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHComponentGeneratorSinglePanel.h>

@interface KHComponentGeneratorFoldedSinglePanel : KHComponentGeneratorSinglePanel
{
}

- (double)heightWithBleedForSection:(long long)arg1;
- (double)heightForSection:(long long)arg1;
- (double)widthWithBleedForSection:(long long)arg1;
- (double)widthForSection:(long long)arg1;
- (id)photoFrames;
- (void)fillContext:(struct CGContext *)arg1 scale:(double)arg2 rect:(struct CGRect)arg3 renderingIntent:(unsigned long long)arg4 section:(long long)arg5 progressDelegate:(id)arg6;

@end

