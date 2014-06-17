/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableArray;

@interface MPRemoteCommand : NSObject  {
    NSMutableArray *_targetInvocations;
    unsigned int _mediaRemoteCommandType;
    bool_enabled;
}

@property(getter=isEnabled) bool enabled;


- (id)_mediaRemoteCommandInfoOptions;
- (void)_addTarget:(id)arg1 action:(SEL)arg2 retainTarget:(bool)arg3;
- (bool)hasTargets;
- (id)keyPathsForValuesTriggeringCommandsChanged;
- (id)invokeCommandWithEvent:(id)arg1;
- (unsigned int)mediaRemoteCommandType;
- (struct _MRMediaRemoteCommandInfo { }*)createCommandInfoRepresentation;
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;
- (void)setEnabled:(bool)arg1;
- (bool)isEnabled;
- (void)removeTarget:(id)arg1;
- (id)addTargetWithHandler:(id)arg1;
- (bool)isSupported;
- (id)init;
- (void).cxx_destruct;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;

@end