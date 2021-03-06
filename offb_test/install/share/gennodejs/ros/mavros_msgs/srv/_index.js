
"use strict";

let WaypointPush = require('./WaypointPush.js')
let CommandTOL = require('./CommandTOL.js')
let FileMakeDir = require('./FileMakeDir.js')
let FileOpen = require('./FileOpen.js')
let FileRemove = require('./FileRemove.js')
let FileChecksum = require('./FileChecksum.js')
let CommandTriggerControl = require('./CommandTriggerControl.js')
let ParamSet = require('./ParamSet.js')
let StreamRate = require('./StreamRate.js')
let ParamGet = require('./ParamGet.js')
let FileRemoveDir = require('./FileRemoveDir.js')
let SetMavFrame = require('./SetMavFrame.js')
let FileWrite = require('./FileWrite.js')
let FileTruncate = require('./FileTruncate.js')
let FileRead = require('./FileRead.js')
let WaypointSetCurrent = require('./WaypointSetCurrent.js')
let FileClose = require('./FileClose.js')
let FileList = require('./FileList.js')
let WaypointClear = require('./WaypointClear.js')
let ParamPush = require('./ParamPush.js')
let SetMode = require('./SetMode.js')
let FileRename = require('./FileRename.js')
let ParamPull = require('./ParamPull.js')
let CommandHome = require('./CommandHome.js')
let CommandInt = require('./CommandInt.js')
let WaypointPull = require('./WaypointPull.js')
let CommandBool = require('./CommandBool.js')
let CommandLong = require('./CommandLong.js')

module.exports = {
  WaypointPush: WaypointPush,
  CommandTOL: CommandTOL,
  FileMakeDir: FileMakeDir,
  FileOpen: FileOpen,
  FileRemove: FileRemove,
  FileChecksum: FileChecksum,
  CommandTriggerControl: CommandTriggerControl,
  ParamSet: ParamSet,
  StreamRate: StreamRate,
  ParamGet: ParamGet,
  FileRemoveDir: FileRemoveDir,
  SetMavFrame: SetMavFrame,
  FileWrite: FileWrite,
  FileTruncate: FileTruncate,
  FileRead: FileRead,
  WaypointSetCurrent: WaypointSetCurrent,
  FileClose: FileClose,
  FileList: FileList,
  WaypointClear: WaypointClear,
  ParamPush: ParamPush,
  SetMode: SetMode,
  FileRename: FileRename,
  ParamPull: ParamPull,
  CommandHome: CommandHome,
  CommandInt: CommandInt,
  WaypointPull: WaypointPull,
  CommandBool: CommandBool,
  CommandLong: CommandLong,
};
