
#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

// Spam Assist - base del mod
class $modify(SpamAssist, PlayLayer) {
    bool init(GJGameLevel* level, bool dontCreateObjects) {
        if (!PlayLayer::init(level, dontCreateObjects)) {
            return false;
        }

        log::info("Spam Assist cargado correctamente");
        return true;
    }
};
